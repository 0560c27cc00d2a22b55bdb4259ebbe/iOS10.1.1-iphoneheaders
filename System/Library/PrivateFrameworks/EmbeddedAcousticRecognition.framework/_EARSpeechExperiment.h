/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EARSpeechRecognizer, _EARUserProfile;

@interface _EARSpeechExperiment : NSObject {

	_EARSpeechRecognizer* _recognizer;
	_EARUserProfile* _userProfile;

}
-(id)initWithRecognizer:(id)arg1 userProfile:(id)arg2 ;
-(void)evaluateScript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)evaluateScript:(id)arg1 archiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

