/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) unsigned errorCode; 
-(unsigned long long)type;
-(unsigned)errorCode;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(unsigned)arg2 ;
-(NSArray *)deviceIDs;
@end

