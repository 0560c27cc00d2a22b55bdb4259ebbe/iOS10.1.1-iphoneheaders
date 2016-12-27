/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class MusicStoreCuratorPlaylistsResponse;

@interface MusicStoreCuratorPlaylistsRequest : MPStoreModelRequest {

	long long _curatorStoreAdamID;
	MusicStoreCuratorPlaylistsResponse* _previousResponse;

}

@property (assign,nonatomic) long long curatorStoreAdamID;                                       //@synthesize curatorStoreAdamID=_curatorStoreAdamID - In the implementation block
@property (nonatomic,retain) MusicStoreCuratorPlaylistsResponse * previousResponse;              //@synthesize previousResponse=_previousResponse - In the implementation block
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MusicStoreCuratorPlaylistsResponse *)previousResponse;
-(void)setPreviousResponse:(MusicStoreCuratorPlaylistsResponse *)arg1 ;
-(long long)curatorStoreAdamID;
-(void)setCuratorStoreAdamID:(long long)arg1 ;
@end

