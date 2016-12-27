/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/AudioServerApplication-Structs.h>
#import <AudioServerApplication/ASAControl.h>

@interface ASALevelControl : ASAControl

@property (assign,nonatomic) float scalarValue; 
@property (assign,nonatomic) float decibelValue; 
@property (nonatomic,readonly) float minimumDecibelValue; 
@property (nonatomic,readonly) float maximumDecibelValue; 
@property (nonatomic,readonly) AudioValueRange decibelRange; 
-(float)decibelValue;
-(float)decibelFromScalar:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(void)setDecibelValue:(float)arg1 ;
-(void)setScalarValue:(float)arg1 ;
-(float)maximumDecibelValue;
-(float)minimumDecibelValue;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(AudioValueRange)decibelRange;
-(float)scalarValue;
@end

