/* tslint:disable */
/* eslint-disable */
/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


import * as runtime from '../runtime';
import {
    Client,
    ClientFromJSON,
    ClientToJSON,
} from '../models';

export interface 123testSpecialTagsRequest {
    client: Client;
}

/**
 * 
 */
export class AnotherFakeApi extends runtime.BaseAPI {

    /**
     * To test special tags and operation ID starting with number
     * To test special tags
     */
    async _123testSpecialTagsRaw(requestParameters: 123testSpecialTagsRequest, initOverrides?: RequestInit): Promise<runtime.ApiResponse<Client>> {
        if (requestParameters.client === null || requestParameters.client === undefined) {
            throw new runtime.RequiredError('client','Required parameter requestParameters.client was null or undefined when calling _123testSpecialTags.');
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        const response = await this.request({
            path: `/another-fake/dummy`,
            method: 'PATCH',
            headers: headerParameters,
            query: queryParameters,
            body: ClientToJSON(requestParameters.client),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ClientFromJSON(jsonValue));
    }

    /**
     * To test special tags and operation ID starting with number
     * To test special tags
     */
    async _123testSpecialTags(requestParameters: 123testSpecialTagsRequest, initOverrides?: RequestInit): Promise<Client> {
        const response = await this._123testSpecialTagsRaw(requestParameters, initOverrides);
        return await response.value();
    }

}
