/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSMutableString, NSString;

@interface CNDescriptionBuilder : NSObject {

	NSObject* _object;
	NSMutableString* _description;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(id)appendNamesAndObjects:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(id)appendName:(id)arg1 object:(id)arg2 ;
-(void)setSeparator:(NSString *)arg1 ;
-(void)tryAppendKey:(id)arg1 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)appendName:(id)arg1 boolValue:(BOOL)arg2 ;
-(id)appendName:(id)arg1 integerValue:(long long)arg2 ;
-(id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2 ;
-(id)appendName:(id)arg1 intValue:(int)arg2 ;
-(id)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(id)appendName:(id)arg1 pointerValue:(void*)arg2 ;
-(id)appendName:(id)arg1 selector:(SEL)arg2 ;
-(id)appendKey:(id)arg1 ;
-(NSString *)separator;
-(id)build;
-(id)appendNamesAndObjects:(id)arg1 args:(char*)arg2 ;
@end

