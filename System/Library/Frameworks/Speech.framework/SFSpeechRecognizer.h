/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol NSObject, SFSpeechRecognizerDelegate;
@class AFDictationConnection, NSString, NSLocale, NSOperationQueue;

@interface SFSpeechRecognizer : NSObject <AFDictationDelegate> {

	AFDictationConnection* _dictationConnection;
	NSString* _languageCode;
	id<NSObject> _facetimeObserver;
	id<NSObject> _foregroundObserver;
	id<NSObject> _preferencesObserver;
	NSLocale* _locale;
	id<SFSpeechRecognizerDelegate> _delegate;
	long long _defaultTaskHint;
	NSOperationQueue* _queue;

}

@property (getter=_isAvailableForForcedOfflineRecognition,nonatomic,readonly) BOOL _availableForForcedOfflineRecognition; 
@property (getter=isAvailableForRecordingRecognition,nonatomic,readonly) BOOL availableForRecordingRecognition; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy,readonly) NSLocale * locale;                                                                                 //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic,__weak) id<SFSpeechRecognizerDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long defaultTaskHint;                                                                                //@synthesize defaultTaskHint=_defaultTaskHint - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(id)supportedLocales;
+(void)_fetchSupportedForcedOfflineLocalesWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SFSpeechRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id<SFSpeechRecognizerDelegate>)delegate;
-(NSLocale *)locale;
-(NSOperationQueue *)queue;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isAvailable;
-(id)recognitionTaskWithRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)_isAvailableForForcedOfflineRecognition;
-(void)_requestOfflineDictationSupportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_informDelegateOfAvailabilityChange;
-(void)_informDelegateOfPreferencesChange;
-(BOOL)isAvailableForRecordingRecognition;
-(BOOL)_isInternalTaskHint:(long long)arg1 ;
-(void)prepareWithRequest:(id)arg1 ;
-(id)_recognitionTaskWithResultHandler:(/*^block*/id)arg1 ;
-(void)_sendEngagementFeedback:(long long)arg1 requestIdentifier:(id)arg2 ;
-(long long)defaultTaskHint;
-(void)setDefaultTaskHint:(long long)arg1 ;
@end

