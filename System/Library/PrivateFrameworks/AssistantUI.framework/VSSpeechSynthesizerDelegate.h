/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizerDidStartSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4;
-(void)speechSynthesizerDidPauseSpeaking:(id)arg1;
-(void)speechSynthesizerDidContinueSpeaking:(id)arg1;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
-(void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3;

@end

