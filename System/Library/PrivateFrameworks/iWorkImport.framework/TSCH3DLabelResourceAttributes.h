/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {

	TSWPParagraphStyle* mParagraphStyle;
	NSString* mString;
	TSCH3DLabelBitmapContextInfo* mBitmapContextInfo;
	double mLabelWidth;
	double mRenderSamples;

}

@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo; 
@property (nonatomic,readonly) double labelWidth; 
@property (nonatomic,readonly) double renderSamples; 
+(id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
-(TSCH3DLabelBitmapContextInfo *)bitmapContextInfo;
-(double)renderSamples;
-(id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(double)labelWidth;
-(TSWPParagraphStyle *)paragraphStyle;
@end

