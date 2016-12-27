/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCItem.h>

@class BRCAccountSession, BRCServerZone, NSString, NSNumber, BRCItemID, BRCStatInfo, BRCVersion, BRCClientZone;

@interface BRCServerItem : NSObject <BRCItem> {

	BRCAccountSession* _session;
	BRCServerZone* _zone;
	unsigned long long _sharingOptions;
	BOOL _needsInsert;
	NSString* _symlinkTarget;
	NSNumber* _ownerKey;
	BRCItemID* _itemID;
	NSString* _originalName;
	long long _rank;
	BRCStatInfo* _st;
	BRCVersion* _latestVersion;
	BRCServerZone* _serverZone;
	BRCClientZone* _clientZone;

}

@property (nonatomic,readonly) long long rank;                               //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * originalName;                      //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,readonly) BRCStatInfo * st;                             //@synthesize st=_st - In the implementation block
@property (nonatomic,readonly) BRCVersion * latestVersion;                   //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,readonly) NSString * symlinkTarget;                     //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isFSRoot; 
@property (nonatomic,readonly) BOOL isZoneRoot; 
@property (nonatomic,readonly) BOOL isSymLink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (nonatomic,readonly) BRCItemID * itemID;                           //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSNumber * ownerKey;                          //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCServerZone * serverZone;                   //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,readonly) BRCClientZone * clientZone;                   //@synthesize clientZone=_clientZone - In the implementation block
@property (assign,nonatomic) unsigned long long sharingOptions;              //@synthesize sharingOptions=_sharingOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BOOL)isLive;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)rank;
-(BRCAccountSession *)session;
-(BRCVersion *)latestVersion;
-(BRCItemID *)itemID;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BRCClientZone *)clientZone;
-(BRCStatInfo *)st;
-(BOOL)isDocument;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)isSymLink;
-(BOOL)isBRAlias;
-(BOOL)isFSRoot;
-(BOOL)isFinderBookmark;
-(BOOL)isDead;
-(unsigned long long)sharingOptions;
-(NSNumber *)ownerKey;
-(BOOL)isZoneRoot;
-(BRCServerZone *)serverZone;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(void)setSharingOptions:(unsigned long long)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(id)initFromPQLResultSet:(id)arg1 serverZone:(id)arg2 error:(id*)arg3 ;
-(NSString *)symlinkTarget;
-(id)initWithServerItem:(id)arg1 ;
-(id)appLibraryForRootItem;
-(id)newLocalItemWithServerZone:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(unsigned)_t_pcsChainState;
-(NSString *)originalName;
@end

