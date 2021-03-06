/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray, NSData;

@interface RadioFetchMetadataRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _itemIDs;
	NSData* _timedMetadata;
	NSArray* _tracks;

}

@property (nonatomic,copy) NSArray * itemIDs;                   //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,copy) NSData * timedMetadata;              //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,retain) NSArray * tracks;                  //@synthesize tracks=_tracks - In the implementation block
-(NSArray *)itemIDs;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setItemIDs:(NSArray *)arg1 ;
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)timedMetadata;
-(NSArray *)tracks;
-(id)_itemIDsToRadioTracks;
-(void)setTracks:(NSArray *)arg1 ;
@end

