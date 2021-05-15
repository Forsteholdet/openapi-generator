//
// MixedPropertiesAndAdditionalPropertiesClass.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
import AnyCodable

internal struct MixedPropertiesAndAdditionalPropertiesClass: Codable, Hashable {

    internal var uuid: UUID?
    internal var dateTime: Date?
    internal var map: [String: Animal]?

    internal init(uuid: UUID? = nil, dateTime: Date? = nil, map: [String: Animal]? = nil) {
        self.uuid = uuid
        self.dateTime = dateTime
        self.map = map
    }

    internal enum CodingKeys: String, CodingKey, CaseIterable {
        case uuid
        case dateTime
        case map
    }

    // Encodable protocol methods

    internal func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(uuid, forKey: .uuid)
        try container.encodeIfPresent(dateTime, forKey: .dateTime)
        try container.encodeIfPresent(map, forKey: .map)
    }
}
