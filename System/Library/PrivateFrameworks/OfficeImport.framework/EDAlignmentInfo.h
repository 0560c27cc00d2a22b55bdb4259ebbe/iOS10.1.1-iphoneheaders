/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {

	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	BOOL mTextWrapped;
	BOOL mHorizontalAlignOverridden;
	BOOL mVerticalAlignOverridden;
	BOOL mIndentOverridden;
	BOOL mTextWrappedOveridden;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alignmentInfo;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)horizontalAlignment;
-(int)verticalAlignment;
-(void)setHorizontalAlignment:(int)arg1 ;
-(void)setVerticalAlignment:(int)arg1 ;
-(BOOL)isVerticalAlignOverridden;
-(void)setIndent:(int)arg1 ;
-(BOOL)isHorizontalAlignOverridden;
-(BOOL)isTextWrapped;
-(int)textRotation;
-(int)indent;
-(BOOL)isTextWrappedOverridden;
-(BOOL)isIndentOverridden;
-(BOOL)isEqualToAlignmentInfo:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(void)setTextWrapped:(BOOL)arg1 ;
-(void)setTextRotation:(int)arg1 ;
@end

