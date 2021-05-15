//
// Model200Response.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
import AnyCodable

/** Model for testing model name starting with number */
public struct Model200Response: Codable, Hashable {

    public private(set) var name: Int?
    public private(set) var _class: String?

    public init(name: Int? = nil, _class: String? = nil) {
        self.name = name
        self._class = _class
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case name
        case _class = "class"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(_class, forKey: ._class)
    }
}
