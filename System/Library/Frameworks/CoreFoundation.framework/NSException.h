/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSCoding> {

	NSString* name;
	NSString* reason;
	NSDictionary* userInfo;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * reason; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSArray * callStackReturnAddresses; 
@property (copy,readonly) NSArray * callStackSymbols; 
+(void)raise:(id)arg1 format:(id)arg2 arguments:(char*)arg3 ;
+(void)raise:(id)arg1 format:(id)arg2 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(id)nr_safeDescription;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)_installStackTraceKeyIfNeeded;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)raise;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)callStackSymbols;
-(NSArray *)callStackReturnAddresses;
-(NSString *)reason;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
@end

