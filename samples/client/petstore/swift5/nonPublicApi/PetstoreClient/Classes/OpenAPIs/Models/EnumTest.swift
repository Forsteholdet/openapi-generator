//
// EnumTest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
import AnyCodable

internal struct EnumTest: Codable, Hashable {

    internal enum EnumString: String, Codable, CaseIterable {
        case upper = "UPPER"
        case lower = "lower"
        case empty = ""
    }
    internal enum EnumStringRequired: String, Codable, CaseIterable {
        case upper = "UPPER"
        case lower = "lower"
        case empty = ""
    }
    internal enum EnumInteger: Int, Codable, CaseIterable {
        case _1 = 1
        case number1 = -1
    }
    internal enum EnumNumber: Double, Codable, CaseIterable {
        case _11 = 1.1
        case number12 = -1.2
    }
    internal var enumString: EnumString?
    internal var enumStringRequired: EnumStringRequired
    internal var enumInteger: EnumInteger?
    internal var enumNumber: EnumNumber?
    internal var outerEnum: OuterEnum?

    internal init(enumString: EnumString? = nil, enumStringRequired: EnumStringRequired, enumInteger: EnumInteger? = nil, enumNumber: EnumNumber? = nil, outerEnum: OuterEnum? = nil) {
        self.enumString = enumString
        self.enumStringRequired = enumStringRequired
        self.enumInteger = enumInteger
        self.enumNumber = enumNumber
        self.outerEnum = outerEnum
    }

    internal enum CodingKeys: String, CodingKey, CaseIterable {
        case enumString = "enum_string"
        case enumStringRequired = "enum_string_required"
        case enumInteger = "enum_integer"
        case enumNumber = "enum_number"
        case outerEnum
    }

    // Encodable protocol methods

    internal func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(enumString, forKey: .enumString)
        try container.encode(enumStringRequired, forKey: .enumStringRequired)
        try container.encodeIfPresent(enumInteger, forKey: .enumInteger)
        try container.encodeIfPresent(enumNumber, forKey: .enumNumber)
        try container.encodeIfPresent(outerEnum, forKey: .outerEnum)
    }
}
