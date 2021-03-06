///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGExternalSharingPolicy;
@class DBTEAMLOGSharedFolderChangeMemberPolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderChangeMemberPolicyDetails` struct.
///
/// Changed who can become a member of the shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderChangeMemberPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

/// Shared folder type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderType;

/// New external invite policy.
@property (nonatomic, readonly) DBTEAMLOGExternalSharingPolicy *dNewValue;

/// Previous external invite policy. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGExternalSharingPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
/// @param dNewValue New external invite policy.
/// @param sharedFolderType Shared folder type. Might be missing due to
/// historical data gap.
/// @param previousValue Previous external invite policy. Might be missing due
/// to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                 originalFolderName:(NSString *)originalFolderName
                          dNewValue:(DBTEAMLOGExternalSharingPolicy *)dNewValue
                   sharedFolderType:(nullable NSString *)sharedFolderType
                      previousValue:(nullable DBTEAMLOGExternalSharingPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
/// @param dNewValue New external invite policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                 originalFolderName:(NSString *)originalFolderName
                          dNewValue:(DBTEAMLOGExternalSharingPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderChangeMemberPolicyDetails`
/// struct.
///
@interface DBTEAMLOGSharedFolderChangeMemberPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedFolderChangeMemberPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedFolderChangeMemberPolicyDetails` object.
///
+ (DBTEAMLOGSharedFolderChangeMemberPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
