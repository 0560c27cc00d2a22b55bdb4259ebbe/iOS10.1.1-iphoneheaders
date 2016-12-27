/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFSpeechRecognizer, NSOperationQueue, VMVoicemailSanitizeTranscriptionDatabaseOperation;

@interface VMVoicemailTranscriptionController : NSObject {

	SFSpeechRecognizer* _recognizer;
	NSOperationQueue* _transcriptionQueue;
	VMVoicemailSanitizeTranscriptionDatabaseOperation* _sanitizeOperation;

}

@property (nonatomic,retain) SFSpeechRecognizer * recognizer;                                                    //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * transcriptionQueue;                                              //@synthesize transcriptionQueue=_transcriptionQueue - In the implementation block
@property (nonatomic,retain) VMVoicemailSanitizeTranscriptionDatabaseOperation * sanitizeOperation;              //@synthesize sanitizeOperation=_sanitizeOperation - In the implementation block
+(id)sharedTranscriptionController;
-(id)init;
-(SFSpeechRecognizer *)recognizer;
-(void)setRecognizer:(SFSpeechRecognizer *)arg1 ;
-(void)cancelQueuedTranscriptions;
-(void)startDatabaseSanitizationTask;
-(void)reportDictationProblemForFileAtURL:(id)arg1 ;
-(void)retrieveDictationResultForFileAtURL:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 priority:(long long)arg3 timeout:(double)arg4 ;
-(void)_setupRecognizer;
-(void)setSanitizeOperation:(VMVoicemailSanitizeTranscriptionDatabaseOperation *)arg1 ;
-(void)_afPrefsChanged:(id)arg1 ;
-(VMVoicemailSanitizeTranscriptionDatabaseOperation *)sanitizeOperation;
-(NSOperationQueue *)transcriptionQueue;
-(void)enqueueTranscriptionOperationWithURL:(id)arg1 andHandler:(/*^block*/id)arg2 priority:(long long)arg3 timeout:(double)arg4 ;
-(void)setTranscriptionQueue:(NSOperationQueue *)arg1 ;
@end

