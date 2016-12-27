/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter {

	NSString* mPreferredFormat;
	BOOL isDateOnly;
	BOOL isTimeOnly;

}

@property (nonatomic,retain) NSString * preferredFormat; 
@property (assign,nonatomic) BOOL isDateOnly; 
@property (assign,nonatomic) BOOL isTimeOnly; 
-(void)dealloc;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(NSString *)preferredFormat;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

