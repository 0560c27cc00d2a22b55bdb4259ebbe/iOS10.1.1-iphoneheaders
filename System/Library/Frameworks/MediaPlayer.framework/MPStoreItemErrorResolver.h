/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>

@class SSKeybagRequest, MPAVItem, NSNumber;

@interface MPStoreItemErrorResolver : MPAVErrorResolver {

	SSKeybagRequest* _request;
	MPAVItem* _item;
	NSNumber* _storeAccountIdentifier;

}

@property (nonatomic,readonly) MPAVItem * item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
-(void)dealloc;
-(MPAVItem *)item;
-(void)resolveError:(id)arg1 ;
-(id)initWithItem:(id)arg1 storeAccountIdentifier:(id)arg2 ;
-(NSNumber *)storeAccountIdentifier;
@end

