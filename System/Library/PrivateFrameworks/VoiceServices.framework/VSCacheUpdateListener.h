/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {

	NSLock* _lock;
	NSMutableArray* _updateRequestQueue;
	NSDictionary* _dataProviders;
	NSTimer* _flushTimer;
	BOOL _isListening;

}
+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)_initShared;
-(id)init;
-(void)dealloc;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)startListening;
-(void)_flush;
-(void)stopListening;
@end

