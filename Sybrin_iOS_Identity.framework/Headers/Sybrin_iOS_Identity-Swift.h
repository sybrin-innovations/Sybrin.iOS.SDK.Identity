// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef SYBRIN_IOS_IDENTITY_SWIFT_H
#define SYBRIN_IOS_IDENTITY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import Sybrin_iOS_Common;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Sybrin_iOS_Identity",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, CitizenshipType, open) {
  CitizenshipTypeCitizen = 0,
  CitizenshipTypePermanentResident = 1,
  CitizenshipTypeUnknown = 2,
};

typedef SWIFT_ENUM(NSInteger, Country, open) {
  CountryGhana = 0,
  CountryKenya = 1,
  CountryMalawi = 2,
  CountryMozambique = 3,
  CountryPhilippines = 4,
  CountrySouthAfrica = 5,
  CountryUganda = 6,
  CountryZimbabwe = 7,
};

typedef SWIFT_ENUM(NSInteger, Document, open) {
  DocumentGhanaPassport = 0,
  DocumentKenyaIDCard = 1,
  DocumentKenyaPassport = 2,
  DocumentMalawiPassport = 3,
  DocumentMozambiqueIDCard = 4,
  DocumentMozambiquePassport = 5,
  DocumentPhilippinesDriversLicense = 6,
  DocumentPhilippinesIDCard = 7,
  DocumentPhilippinesPassport = 8,
  DocumentSouthAfricaDriversLicense = 9,
  DocumentSouthAfricaGreenBook = 10,
  DocumentSouthAfricaIDCard = 11,
  DocumentSouthAfricaPassport = 12,
  DocumentUgandaIDCard = 13,
  DocumentUgandaPassport = 14,
  DocumentZimbabwePassport = 15,
};

@class UIImage;

SWIFT_CLASS("_TtC19Sybrin_iOS_Identity13DocumentModel")
@interface DocumentModel : NSObject
@property (nonatomic, readonly, strong) UIImage * _Nullable portraitImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable documentImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedDocumentImage;
@property (nonatomic, readonly, copy) NSString * _Nullable portraitImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable documentImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedDocumentImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, DocumentType, open) {
  DocumentTypeDriversLicense = 0,
  DocumentTypeGreenBook = 1,
  DocumentTypeIDCard = 2,
  DocumentTypePassport = 3,
};


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity19DriversLicenseModel")
@interface DriversLicenseModel : DocumentModel
@property (nonatomic, readonly, copy) NSString * _Nullable licenseNumber;
@property (nonatomic, readonly, strong) UIImage * _Nullable documentBackImage;
@property (nonatomic, readonly, copy) NSString * _Nullable documentBackImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum Sex : NSInteger;

SWIFT_CLASS("_TtC19Sybrin_iOS_Identity13PassportModel")
@interface PassportModel : DocumentModel
@property (nonatomic, readonly, copy) NSString * _Nullable passportType;
@property (nonatomic, readonly, copy) NSString * _Nullable issuingCountryCode;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable names;
@property (nonatomic, readonly, copy) NSString * _Nullable passportNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable nationality;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfBirth;
@property (nonatomic, readonly) enum Sex sex;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfExpiry;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity18GhanaPassportModel")
@interface GhanaPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum GreenBookType : NSInteger;

SWIFT_CLASS("_TtC19Sybrin_iOS_Identity14GreenBookModel")
@interface GreenBookModel : DocumentModel
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable firstNames;
@property (nonatomic, readonly, copy) NSString * _Nullable countryOfBirth;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfBirth;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateIssued;
@property (nonatomic, readonly) enum GreenBookType bookType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GreenBookType, open) {
  GreenBookTypeBilingual = 0,
  GreenBookTypeEnglish = 1,
  GreenBookTypeUnspecified = 2,
};


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity11IDCardModel")
@interface IDCardModel : DocumentModel
@property (nonatomic, readonly, copy) NSString * _Nullable fullName;
@property (nonatomic, readonly) enum Sex sex;
@property (nonatomic, readonly, copy) NSString * _Nullable nationality;
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfBirth;
@property (nonatomic, readonly, strong) UIImage * _Nullable portraitBackImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable documentBackImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedDocumentBackImage;
@property (nonatomic, readonly, copy) NSString * _Nullable portraitBackImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable documentBackImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedDocumentBackImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity16KenyaIDCardModel")
@interface KenyaIDCardModel : IDCardModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine3;
@property (nonatomic, readonly, copy) NSString * _Nullable serialNumber;
@property (nonatomic, readonly) NSInteger serialNumberCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData1;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData2;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfExpiry;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity18KenyaPassportModel")
@interface KenyaPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData;
@property (nonatomic, readonly) NSInteger optionalDataCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity19MalawiPassportModel")
@interface MalawiPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable personalNumber;
@property (nonatomic, readonly) NSInteger personalNumberCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity21MozambiqueIDCardModel")
@interface MozambiqueIDCardModel : IDCardModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine3;
@property (nonatomic, readonly, copy) NSString * _Nullable issuingCountryCode;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData1;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfExpiry;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData2;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable names;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity23MozambiquePassportModel")
@interface MozambiquePassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC19Sybrin_iOS_Identity30PhilippinesDriversLicenseModel")
@interface PhilippinesDriversLicenseModel : DriversLicenseModel
@property (nonatomic, readonly, copy) NSString * _Nullable names;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable nationality;
@property (nonatomic, readonly) enum Sex sex;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfBirth;
@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly, copy) NSString * _Nullable address;
@property (nonatomic, readonly, copy) NSDate * _Nullable expirationDate;
@property (nonatomic, readonly, copy) NSString * _Nullable agencyCode;
@property (nonatomic, readonly, copy) NSString * _Nullable bloodType;
@property (nonatomic, readonly, copy) NSString * _Nullable eyeColor;
@property (nonatomic, readonly, copy) NSString * _Nullable restrictions;
@property (nonatomic, readonly, copy) NSString * _Nullable conditions;
@property (nonatomic, readonly, copy) NSString * _Nullable barcodeData;
@property (nonatomic, readonly, copy) NSString * _Nullable serialNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable fullName;
@property (nonatomic, readonly, strong) UIImage * _Nullable barcodeImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedDocumentBackImage;
@property (nonatomic, readonly, copy) NSString * _Nullable barcodeImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedDocumentBackImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity22PhilippinesIDCardModel")
@interface PhilippinesIDCardModel : IDCardModel
@property (nonatomic, readonly, copy) NSString * _Nullable commonReferenceNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable fullName;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable givenName;
@property (nonatomic, readonly, copy) NSString * _Nullable middleName;
@property (nonatomic, readonly, copy) NSString * _Nullable address;
@property (nonatomic, readonly, copy) NSString * _Nullable barcodeData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity24PhilippinesPassportModel")
@interface PhilippinesPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, Sex, open) {
  SexMale = 0,
  SexFemale = 1,
  SexUndetermined = 2,
};


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity30SouthAfricaDriversLicenseModel")
@interface SouthAfricaDriversLicenseModel : DriversLicenseModel
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly, copy) NSDate * _Nullable identityNumberDateOfBirth;
@property (nonatomic, readonly) enum Sex identityNumberSex;
@property (nonatomic, readonly) enum CitizenshipType identityNumberCitizenship;
@property (nonatomic, readonly) NSInteger identityNumberADigit;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable initials;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly) enum Sex sex;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfBirth;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable vehicleCodes;
@property (nonatomic, readonly, copy) NSString * _Nullable prdpCode;
@property (nonatomic, readonly, copy) NSString * _Nullable idCountryOfIssue;
@property (nonatomic, readonly, copy) NSString * _Nullable licenseCountryOfIssue;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable vehicleRestrictions;
@property (nonatomic, readonly, copy) NSString * _Nullable idNumberType;
@property (nonatomic, readonly, copy) NSString * _Nullable driverRestrictions;
@property (nonatomic, readonly, copy) NSDate * _Nullable prdpExpiry;
@property (nonatomic, readonly, copy) NSString * _Nullable licenseIssueNumber;
@property (nonatomic, readonly, copy) NSDate * _Nullable validFrom;
@property (nonatomic, readonly, copy) NSDate * _Nullable validTo;
@property (nonatomic, readonly, copy) NSArray<NSDate *> * _Nullable issueDates;
@property (nonatomic, readonly, strong) UIImage * _Nullable barcodeImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedDocumentBackImage;
@property (nonatomic, readonly, copy) NSString * _Nullable barcodeImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedDocumentBackImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity25SouthAfricaGreenBookModel")
@interface SouthAfricaGreenBookModel : GreenBookModel
@property (nonatomic, readonly, copy) NSDate * _Nullable identityNumberDateOfBirth;
@property (nonatomic, readonly) enum Sex identityNumberSex;
@property (nonatomic, readonly) enum CitizenshipType identityNumberCitizenship;
@property (nonatomic, readonly) NSInteger identityNumberADigit;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity22SouthAfricaIDCardModel")
@interface SouthAfricaIDCardModel : IDCardModel
@property (nonatomic, readonly, copy) NSString * _Nullable fullName;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable names;
@property (nonatomic, readonly, copy) NSDate * _Nullable identityNumberDateOfBirth;
@property (nonatomic, readonly) enum Sex identityNumberSex;
@property (nonatomic, readonly) enum CitizenshipType identityNumberCitizenship;
@property (nonatomic, readonly) NSInteger identityNumberADigit;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable countryOfBirth;
@property (nonatomic, readonly) enum CitizenshipType citizenship;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateIssued;
@property (nonatomic, readonly, copy) NSString * _Nullable rsaCode;
@property (nonatomic, readonly, copy) NSString * _Nullable cardNumber;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity24SouthAfricaPassportModel")
@interface SouthAfricaPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly, copy) NSDate * _Nullable identityNumberDateOfBirth;
@property (nonatomic, readonly) enum Sex identityNumberSex;
@property (nonatomic, readonly) enum CitizenshipType identityNumberCitizenship;
@property (nonatomic, readonly) NSInteger identityNumberADigit;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly) NSInteger identityNumberPassportCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SybrinIdentityConfiguration;
@class UIViewController;

SWIFT_CLASS("_TtC19Sybrin_iOS_Identity14SybrinIdentity")
@interface SybrinIdentity : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SybrinIdentity * _Nonnull shared;)
+ (SybrinIdentity * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) SybrinIdentityConfiguration * _Nullable configuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)changeLogLevelTo:(enum LogLevel)logLevel;
- (void)scanDocumentOn:(UIViewController * _Nonnull)viewController for:(enum Document)document doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(DocumentModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)scanDriversLicenseOn:(UIViewController * _Nonnull)viewController for:(enum Country)country doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(DriversLicenseModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)scanGreenBookOn:(UIViewController * _Nonnull)viewController doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(GreenBookModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)scanIDCardOn:(UIViewController * _Nonnull)viewController for:(enum Country)country doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(IDCardModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)scanPassportOn:(UIViewController * _Nonnull)viewController for:(enum Country)country doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(PassportModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
@end


@class UIColor;

SWIFT_CLASS("_TtC19Sybrin_iOS_Identity27SybrinIdentityConfiguration")
@interface SybrinIdentityConfiguration : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull license;
@property (nonatomic, strong) UIColor * _Nonnull overlayColor;
@property (nonatomic, strong) UIColor * _Nonnull overlayLabelTextColor;
@property (nonatomic, strong) UIColor * _Nonnull overlaySubLabelTextColor;
@property (nonatomic, strong) UIColor * _Nonnull overlayBorderColor;
@property (nonatomic) CGFloat overlayBorderThickness;
@property (nonatomic) CGFloat overlayBorderLength;
@property (nonatomic) enum UIBlurEffectStyle overlayBlurStyle;
@property (nonatomic) CGFloat overlayBlurIntensity;
@property (nonatomic) enum AVCaptureDevicePosition cameraPosition;
@property (nonatomic, copy) NSString * _Nonnull environmentKey;
@property (nonatomic, copy) NSString * _Nonnull overlayBrandingTitleText;
@property (nonatomic, strong) UIColor * _Nonnull overlayBrandingTitleColor;
@property (nonatomic, copy) NSString * _Nonnull overlayBrandingSubtitleText;
@property (nonatomic, strong) UIColor * _Nonnull overlayBrandingSubtitleColor;
@property (nonatomic) BOOL enableBackButton;
@property (nonatomic) BOOL enableSwipeRightGesture;
@property (nonatomic) BOOL showFlashButton;
@property (nonatomic) BOOL displayToastMessages;
@property (nonatomic) BOOL saveImages;
@property (nonatomic) CGFloat cutoutCornerRadius;
@property (nonatomic) BOOL enableMultiPhaseVerification;
@property (nonatomic) BOOL enableHelpMessages;
- (nonnull instancetype)initWithLicense:(NSString * _Nonnull)license OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC19Sybrin_iOS_Identity17UgandaIDCardModel")
@interface UgandaIDCardModel : IDCardModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine3;
@property (nonatomic, readonly, copy) NSString * _Nullable issuingCountryCode;
@property (nonatomic, readonly, copy) NSString * _Nullable cardNumber;
@property (nonatomic, readonly) NSInteger cardNumberCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData1;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData2;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateOfExpiry;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSDate * _Nullable dateIssued;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable surname;
@property (nonatomic, readonly, copy) NSString * _Nullable names;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity19UgandaPassportModel")
@interface UgandaPassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable optionalData;
@property (nonatomic, readonly) NSInteger optionalDataCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19Sybrin_iOS_Identity21ZimbabwePassportModel")
@interface ZimbabwePassportModel : PassportModel
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine1;
@property (nonatomic, readonly, copy) NSString * _Nullable mrzLine2;
@property (nonatomic, readonly) NSInteger passportNumberCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfBirthCheckDigit;
@property (nonatomic, readonly) NSInteger dateOfExpiryCheckDigit;
@property (nonatomic, readonly, copy) NSString * _Nullable identityNumber;
@property (nonatomic, readonly) NSInteger identityNumberCheckDigit;
@property (nonatomic, readonly) NSInteger compositeCheckDigit;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
