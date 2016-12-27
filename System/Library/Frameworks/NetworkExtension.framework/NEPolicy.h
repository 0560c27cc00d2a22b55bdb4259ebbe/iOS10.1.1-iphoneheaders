/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject <NEPrettyDescription> {

	unsigned _order;
	NEPolicyResult* _result;
	NSArray* _conditions;

}

@property (assign) unsigned order;                       //@synthesize order=_order - In the implementation block
@property (retain) NEPolicyResult * result;              //@synthesize result=_result - In the implementation block
@property (copy) NSArray * conditions;                   //@synthesize conditions=_conditions - In the implementation block
-(id)init;
-(id)description;
-(void)setOrder:(unsigned)arg1 ;
-(unsigned)order;
-(BOOL)validate;
-(NEPolicyResult *)result;
-(void)setResult:(NEPolicyResult *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithOrder:(unsigned)arg1 result:(id)arg2 conditions:(id)arg3 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
@end

