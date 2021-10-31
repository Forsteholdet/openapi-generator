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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface ModelApiResponse
 */
export interface ModelApiResponse {
    /**
     * 
     * @type {number}
     * @memberof ModelApiResponse
     */
    code?: number;
    /**
     * 
     * @type {string}
     * @memberof ModelApiResponse
     */
    type?: string;
    /**
     * 
     * @type {string}
     * @memberof ModelApiResponse
     */
    message?: string;
}

export function ModelApiResponseFromJSON(json: any): ModelApiResponse {
    return ModelApiResponseFromJSONTyped(json, false);
}

export function ModelApiResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): ModelApiResponse {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'code': !exists(json, 'code') ? undefined : json['code'],
        'type': !exists(json, 'type') ? undefined : json['type'],
        'message': !exists(json, 'message') ? undefined : json['message'],
    };
}

export function ModelApiResponseToJSON(value?: ModelApiResponse | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'code': value.code,
        'type': value.type,
        'message': value.message,
    };
}

