/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKVoiceControllerDelegate.h>

@protocol CKAudioRecorderDelegate;
@class CKVoiceController, NSURL, NSDate, NSString;

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate> {

	BOOL _recording;
	BOOL _recordingEmpty;
	BOOL _cancelled;
	BOOL _shouldPlayStartSound;
	BOOL _shouldPlayStopSound;
	id<CKAudioRecorderDelegate> _delegate;
	CKVoiceController* _voiceController;
	NSURL* _fileURL;
	NSDate* _startDate;
	/*^block*/id _completion;
	OpaqueAudioFileIDRef _fileID;
	long long _totalPacketsCount;

}

@property (assign,getter=isRecording,nonatomic) BOOL recording;                        //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isRecordingEmpty,nonatomic) BOOL recordingEmpty;              //@synthesize recordingEmpty=_recordingEmpty - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) CKVoiceController * voiceController;                      //@synthesize voiceController=_voiceController - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) id completion;                                              //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayStartSound;                                //@synthesize shouldPlayStartSound=_shouldPlayStartSound - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayStopSound;                                 //@synthesize shouldPlayStopSound=_shouldPlayStopSound - In the implementation block
@property (assign,nonatomic) OpaqueAudioFileIDRef fileID;                              //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) long long totalPacketsCount;                              //@synthesize totalPacketsCount=_totalPacketsCount - In the implementation block
@property (assign,nonatomic,__weak) id<CKAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CKAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<CKAudioRecorderDelegate>)delegate;
-(double)duration;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSURL *)fileURL;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(BOOL)isRecording;
-(void)cancelRecording;
-(void)startRecordingAndPlaySound:(BOOL)arg1 ;
-(void)stopRecordingAndPlaySound:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopRecording:(/*^block*/id)arg1 ;
-(void)startRecordingForRaiseGesture;
-(BOOL)isRecordingEmpty;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setVoiceController:(CKVoiceController *)arg1 ;
-(CKVoiceController *)voiceController;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2 ;
-(void)resetState;
-(void)startRecordingForRaiseGesture:(BOOL)arg1 shouldPlaySound:(BOOL)arg2 ;
-(void)setRecording:(BOOL)arg1 ;
-(void)setShouldPlayStartSound:(BOOL)arg1 ;
-(void)setFileID:(OpaqueAudioFileIDRef)arg1 ;
-(void)setShouldPlayStopSound:(BOOL)arg1 ;
-(void)setRecordingEmpty:(BOOL)arg1 ;
-(BOOL)shouldPlayStartSound;
-(OpaqueAudioFileIDRef)fileID;
-(BOOL)shouldPlayStopSound;
-(long long)totalPacketsCount;
-(void)setTotalPacketsCount:(long long)arg1 ;
@end

