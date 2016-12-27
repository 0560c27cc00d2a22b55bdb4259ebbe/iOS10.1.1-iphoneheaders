/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRDeviceInfo;

@interface MRDeviceInfoMessage : MRProtocolMessage {

	MRDeviceInfo* _deviceInfo;

}

@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
-(unsigned long long)encryptionType;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithDeviceInfo:(id)arg1 ;
-(MRDeviceInfo *)deviceInfo;
@end

