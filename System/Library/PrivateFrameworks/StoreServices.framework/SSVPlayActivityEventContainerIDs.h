/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVPlayActivityEventContainerIDs : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _adamID;
	NSString* _cloudAlbumID;
	unsigned long long _cloudPlaylistID;
	NSString* _globalPlaylistID;
	NSString* _playlistVersionHash;
	long long _stationID;
	NSString* _stationHash;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long adamID;                                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudAlbumID;                     //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudPlaylistID;               //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * globalPlaylistID;                 //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistVersionHash;              //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                      //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationStringID;                  //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,readonly) long long stationID;                              //@synthesize stationID=_stationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)cloudAlbumID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)stationID;
-(NSString *)stationStringID;
-(NSString *)globalPlaylistID;
-(id)_copyWithClass:(Class)arg1 ;
-(NSString *)stationHash;
-(long long)adamID;
@end

