/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding> {

	NTKPhotoAnalysis* _analysis;
	int _sequenceNumber;

}

@property (nonatomic,retain) NTKPhotoAnalysis * analysis;              //@synthesize analysis=_analysis - In the implementation block
@property (assign,nonatomic) int sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(int)sequenceNumber;
-(NTKPhotoAnalysis *)analysis;
-(void)setAnalysis:(NTKPhotoAnalysis *)arg1 ;
@end

