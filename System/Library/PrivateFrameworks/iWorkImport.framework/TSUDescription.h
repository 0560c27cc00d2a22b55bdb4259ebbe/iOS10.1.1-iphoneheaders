/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString, NSMutableDictionary, NSMutableArray;

@interface TSUDescription : NSObject {

	NSObject* _object;
	Class _class;
	void* _cfType;
	NSString* _header;
	NSMutableDictionary* _fields;
	NSMutableArray* _fieldOrder;
	unsigned long long _fieldNameWidth;
	BOOL _commaSeparated;

}
+(id)descriptionWithObject:(id)arg1 format:(id)arg2 ;
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
+(id)descriptionWithObject:(id)arg1 class:(Class)arg2 ;
+(id)descriptionWithCFType:(void*)arg1 format:(id)arg2 ;
+(id)descriptionWithObject:(id)arg1 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(id)descriptionString;
-(id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(char*)arg4 ;
-(id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 ;
-(id)initWithCFType:(void*)arg1 header:(id)arg2 ;
-(void)addField:(id)arg1 value:(id)arg2 ;
-(void)addFieldWithFormat:(id)arg1 ;
-(void)addFieldValue:(id)arg1 ;
-(id)p_header;
-(id)initWithObject:(id)arg1 format:(id)arg2 ;
-(void)addField:(id)arg1 format:(id)arg2 ;
-(void)addSuperDescription;
-(void)setFieldOptionCommaSeparated;
@end

