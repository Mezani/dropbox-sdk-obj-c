///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAclUpdatePolicy;
@class DBSHARINGFolderPolicy;
@class DBSHARINGMemberPolicy;
@class DBSHARINGSharedLinkPolicy;
@class DBSHARINGViewerInfoPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderPolicy` struct.
///
/// A set of policies governing membership and privileges for a shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFolderPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Who can be a member of this shared folder, as set on the folder itself. The
/// effective policy may differ from this value if the team-wide policy is more
/// restrictive. Present only if the folder is owned by a team.
@property (nonatomic, readonly, nullable) DBSHARINGMemberPolicy *memberPolicy;

/// Who can be a member of this shared folder, taking into account both the
/// folder and the team-wide policy. This value may differ from that of
/// member_policy if the team-wide policy is more restrictive than the folder
/// policy. Present only if the folder is owned by a team.
@property (nonatomic, readonly, nullable) DBSHARINGMemberPolicy *resolvedMemberPolicy;

/// Who can add and remove members from this shared folder.
@property (nonatomic, readonly) DBSHARINGAclUpdatePolicy *aclUpdatePolicy;

/// Who links can be shared with.
@property (nonatomic, readonly) DBSHARINGSharedLinkPolicy *sharedLinkPolicy;

/// Who can enable/disable viewer info for this shared folder.
@property (nonatomic, readonly, nullable) DBSHARINGViewerInfoPolicy *viewerInfoPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param aclUpdatePolicy Who can add and remove members from this shared
/// folder.
/// @param sharedLinkPolicy Who links can be shared with.
/// @param memberPolicy Who can be a member of this shared folder, as set on the
/// folder itself. The effective policy may differ from this value if the
/// team-wide policy is more restrictive. Present only if the folder is owned by
/// a team.
/// @param resolvedMemberPolicy Who can be a member of this shared folder,
/// taking into account both the folder and the team-wide policy. This value may
/// differ from that of member_policy if the team-wide policy is more
/// restrictive than the folder policy. Present only if the folder is owned by a
/// team.
/// @param viewerInfoPolicy Who can enable/disable viewer info for this shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAclUpdatePolicy:(DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                       sharedLinkPolicy:(DBSHARINGSharedLinkPolicy *)sharedLinkPolicy
                           memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
                   resolvedMemberPolicy:(nullable DBSHARINGMemberPolicy *)resolvedMemberPolicy
                       viewerInfoPolicy:(nullable DBSHARINGViewerInfoPolicy *)viewerInfoPolicy;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param aclUpdatePolicy Who can add and remove members from this shared
/// folder.
/// @param sharedLinkPolicy Who links can be shared with.
///
/// @return An initialized instance.
///
- (instancetype)initWithAclUpdatePolicy:(DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                       sharedLinkPolicy:(DBSHARINGSharedLinkPolicy *)sharedLinkPolicy;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderPolicy` struct.
///
@interface DBSHARINGFolderPolicySerializer : NSObject

///
/// Serializes `DBSHARINGFolderPolicy` instances.
///
/// @param instance An instance of the `DBSHARINGFolderPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFolderPolicy` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGFolderPolicy *)instance;

///
/// Deserializes `DBSHARINGFolderPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFolderPolicy` API object.
///
/// @return An instantiation of the `DBSHARINGFolderPolicy` object.
///
+ (DBSHARINGFolderPolicy *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
