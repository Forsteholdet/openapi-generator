package org.openapitools.codegen.languages;

import org.openapitools.codegen.*;
import io.swagger.models.properties.ArrayProperty;
import io.swagger.models.properties.MapProperty;
import io.swagger.models.properties.Property;
import io.swagger.models.parameters.Parameter;

import java.io.File;
import java.util.*;

import org.apache.commons.lang3.StringUtils;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class TinyCppClientCodegen extends AbstractCppCodegen implements CodegenConfig {
    public static final String PROJECT_NAME = "TinyClient";

    static final Logger LOGGER = LoggerFactory.getLogger(TinyCppClientCodegen.class);

    public CodegenType getTag() {
        return CodegenType.CLIENT;
    }

    public String getName() {
        return "tiny-cpp";
    }

    public String getHelp() {
        return "Generates a Arduino rest client.";
    }



    public TinyCppClientCodegen() {
        super();
        outputFolder = "generated-code" + File.separator + "tiny-cpp";
        modelTemplateFiles.put("model.mustache", ".md");
        apiTemplateFiles.put("service/api-header.mustache", ".h");
        apiTemplateFiles.put("service/api-body.mustache", ".cpp");
        embeddedTemplateDir = templateDir = "tiny-cpp-client";
        apiPackage = "Apis";
        modelPackage = "Models";
        supportingFiles.add(new SupportingFile("README.mustache", "", "README.md"));
        supportingFiles.add(new SupportingFile("service/Response.h.mustache", "service", "Response.h")); // TODO find right function for folder
        supportingFiles.add(new SupportingFile("service/AbstractService.h.mustache", "service", "AbstractService.h")); // TODO find right function for folder
        // TODO: Fill this out.
    }
}
