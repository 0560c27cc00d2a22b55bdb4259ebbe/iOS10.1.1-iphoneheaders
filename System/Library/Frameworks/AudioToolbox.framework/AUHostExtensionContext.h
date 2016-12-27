/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitHostProtocol.h>
#import <libobjc.A.dylib/_AURemoteParameterSynchronization.h>

@protocol AUAudioUnitXPCProtocol;
@class NSExtension, NSUUID, AUAudioUnit_XH;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization> {

	NSExtension* _extension;
	NSUUID* _requestIdentifier;
	AUAudioUnit_XH* _audioUnit;
	id<AUAudioUnitXPCProtocol> _remote;

}

@property (assign,nonatomic) id<AUAudioUnitXPCProtocol> remote;              //@synthesize remote=_remote - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) AUAudioUnit_XH * audioUnit;                     //@synthesize audioUnit=_audioUnit - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setAudioUnit:(AUAudioUnit_XH *)arg1 ;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)dealloc;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(id<AUAudioUnitXPCProtocol>)remote;
-(void)setRemote:(id<AUAudioUnitXPCProtocol>)arg1 ;
-(void)propertiesChanged:(id)arg1 ;
-(NSUUID *)requestIdentifier;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(AUAudioUnit_XH *)audioUnit;
@end

