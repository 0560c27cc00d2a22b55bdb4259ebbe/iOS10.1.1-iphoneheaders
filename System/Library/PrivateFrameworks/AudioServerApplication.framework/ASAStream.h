/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, ASAAudioFormat, NSArray;

@interface ASAStream : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInput,nonatomic,readonly) BOOL input; 
@property (getter=isOutput,nonatomic,readonly) BOOL output; 
@property (nonatomic,readonly) unsigned terminalType; 
@property (nonatomic,readonly) unsigned startingChannel; 
@property (nonatomic,readonly) unsigned latency; 
@property (nonatomic,copy) ASAAudioFormat * virtualFormat; 
@property (nonatomic,copy) ASAAudioFormat * physicalFormat; 
@property (nonatomic,copy,readonly) NSArray * availableVirtualFormats; 
@property (nonatomic,copy,readonly) NSArray * availablePhysicalFormats; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (getter=isVirtualFormatSettable,nonatomic,readonly) BOOL virtualFormatSettable; 
@property (getter=isPhysicalFormatSettable,nonatomic,readonly) BOOL physicalFormatSettable; 
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)latency;
-(ASAAudioFormat *)physicalFormat;
-(unsigned)startingChannel;
-(ASAAudioFormat *)virtualFormat;
-(unsigned)terminalType;
-(BOOL)isVirtualFormatSettable;
-(BOOL)isPhysicalFormatSettable;
-(void)setVirtualFormat:(ASAAudioFormat *)arg1 ;
-(void)setPhysicalFormat:(ASAAudioFormat *)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(BOOL)isInput;
-(NSArray *)availableVirtualFormats;
-(NSArray *)availablePhysicalFormats;
-(BOOL)isOutput;
@end

