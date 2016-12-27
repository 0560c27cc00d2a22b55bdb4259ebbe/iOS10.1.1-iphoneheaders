/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteStatement.h>

@class HDSQLiteQueryDescriptor, NSArray;

@interface HDSQLiteQueryStatement : HDSQLiteStatement {

	HDSQLiteQueryDescriptor* _descriptor;
	NSArray* _properties;
	NSArray* _columns;

}
-(id)anyEntityWithPredicate:(id)arg1 ;
-(void)enumerateEntitiesWithPredicate:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithDescriptor:(id)arg1 properties:(id)arg2 database:(id)arg3 ;
@end

