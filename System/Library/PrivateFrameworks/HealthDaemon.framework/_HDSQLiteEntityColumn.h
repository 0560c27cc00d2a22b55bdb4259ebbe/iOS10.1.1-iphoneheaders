/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _HDSQLiteEntityColumn : NSObject {

	NSString* _name;
	NSString* _columnType;
	unsigned long long _keyPathType;
	Class _targetEntityClass;
	NSString* _targetProperty;
	long long _deletionAction;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * columnType;                  //@synthesize columnType=_columnType - In the implementation block
@property (nonatomic,readonly) unsigned long long keyPathType;              //@synthesize keyPathType=_keyPathType - In the implementation block
@property (nonatomic,readonly) Class targetEntityClass;                     //@synthesize targetEntityClass=_targetEntityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetProperty;              //@synthesize targetProperty=_targetProperty - In the implementation block
@property (nonatomic,readonly) long long deletionAction;                    //@synthesize deletionAction=_deletionAction - In the implementation block
-(id)description;
-(NSString *)name;
-(long long)deletionAction;
-(id)creationSQL;
-(Class)targetEntityClass;
-(id)_columnNameAndTypeString;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned long long)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6 ;
-(NSString *)columnType;
-(unsigned long long)keyPathType;
-(NSString *)targetProperty;
@end

