/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2 owningSession:(id)arg3 ;
+(BOOL)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)channels;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(unsigned long long)endpointType;
-(id)initWithSession:(id)arg1 ;
-(NSString *)UID;
-(NSArray *)dataSources;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(NSString *)portType;
-(NSString *)portName;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)privateGetID;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isHeadphones;
@end

