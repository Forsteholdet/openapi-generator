//
// FormatTest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
import AnyCodable

internal struct FormatTest: Codable, Hashable {

    internal var integer: Int?
    internal var int32: Int?
    internal var int64: Int64?
    internal var number: Double
    internal var float: Float?
    internal var double: Double?
    internal var string: String?
    internal var byte: Data
    internal var binary: URL?
    internal var date: Date
    internal var dateTime: Date?
    internal var uuid: UUID?
    internal var password: String

    internal init(integer: Int? = nil, int32: Int? = nil, int64: Int64? = nil, number: Double, float: Float? = nil, double: Double? = nil, string: String? = nil, byte: Data, binary: URL? = nil, date: Date, dateTime: Date? = nil, uuid: UUID? = nil, password: String) {
        self.integer = integer
        self.int32 = int32
        self.int64 = int64
        self.number = number
        self.float = float
        self.double = double
        self.string = string
        self.byte = byte
        self.binary = binary
        self.date = date
        self.dateTime = dateTime
        self.uuid = uuid
        self.password = password
    }

    internal enum CodingKeys: String, CodingKey, CaseIterable {
        case integer
        case int32
        case int64
        case number
        case float
        case double
        case string
        case byte
        case binary
        case date
        case dateTime
        case uuid
        case password
    }

    // Encodable protocol methods

    internal func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(integer, forKey: .integer)
        try container.encodeIfPresent(int32, forKey: .int32)
        try container.encodeIfPresent(int64, forKey: .int64)
        try container.encode(number, forKey: .number)
        try container.encodeIfPresent(float, forKey: .float)
        try container.encodeIfPresent(double, forKey: .double)
        try container.encodeIfPresent(string, forKey: .string)
        try container.encode(byte, forKey: .byte)
        try container.encodeIfPresent(binary, forKey: .binary)
        try container.encode(date, forKey: .date)
        try container.encodeIfPresent(dateTime, forKey: .dateTime)
        try container.encodeIfPresent(uuid, forKey: .uuid)
        try container.encode(password, forKey: .password)
    }
}
