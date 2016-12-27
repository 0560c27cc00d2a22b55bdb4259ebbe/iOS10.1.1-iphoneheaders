/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSMMCSProtocol.h>
#import <libobjc.A.dylib/MSPublishStorageProtocol.h>

@protocol MSPublishStorageProtocolDelegate;
@class NSMutableDictionary, NSString;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {

	id<MSPublishStorageProtocolDelegate> _delegate;
	NSMutableDictionary* _itemIDToAssetDict;
	unsigned long long* _itemIDs;
	const char** _signatures;
	char** _authTokens;
	unsigned* _itemFlags;
	long long _itemsInFlight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MSPublishStorageProtocolDelegate>)arg1 ;
-(void)dealloc;
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)deactivate;
-(void)computeHashForAsset:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 ;
-(void)publishAssets:(id)arg1 URL:(id)arg2 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(void)_putItemsFailure;
@end

