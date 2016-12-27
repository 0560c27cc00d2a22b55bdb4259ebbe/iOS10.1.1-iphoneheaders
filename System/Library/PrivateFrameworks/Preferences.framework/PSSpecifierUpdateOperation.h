/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSSpecifier, NSNumber;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying> {

	long long _operation;
	PSSpecifier* _specifier;
	NSNumber* _index;
	NSNumber* _toIndex;

}

@property (nonatomic,readonly) long long operation;                //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) NSNumber * index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSNumber * toIndex;                   //@synthesize toIndex=_toIndex - In the implementation block
+(id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(PSSpecifier *)specifier;
-(id)description;
-(long long)operation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)index;
-(BOOL)applyToArray:(id)arg1 ;
-(void)setIndex:(NSNumber *)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(NSNumber *)toIndex;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(void)setToIndex:(NSNumber *)arg1 ;
@end

