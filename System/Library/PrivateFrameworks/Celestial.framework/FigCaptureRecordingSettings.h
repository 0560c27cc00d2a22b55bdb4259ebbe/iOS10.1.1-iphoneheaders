/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	NSURL* _outputURL;
	NSString* _outputFileType;
	SCD_Struct_BW2 _maxDuration;
	long long _maxFileSize;
	long long _minFreeDiskSpaceLimit;

}

@property (assign,nonatomic) long long settingsID;                         //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                              //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,copy) NSString * outputFileType;                      //@synthesize outputFileType=_outputFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxDuration;                   //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) long long maxFileSize;                        //@synthesize maxFileSize=_maxFileSize - In the implementation block
@property (assign,nonatomic) long long minFreeDiskSpaceLimit;              //@synthesize minFreeDiskSpaceLimit=_minFreeDiskSpaceLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(long long)maxFileSize;
-(NSString *)outputFileType;
-(long long)settingsID;
-(long long)minFreeDiskSpaceLimit;
-(void)setSettingsID:(long long)arg1 ;
-(void)setMaxFileSize:(long long)arg1 ;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(SCD_Struct_BW2)maxDuration;
-(void)setMaxDuration:(SCD_Struct_BW2)arg1 ;
@end

