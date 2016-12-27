/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PKPaymentPreference : NSObject {

	BOOL _isReadOnly;
	BOOL _supportsDeletion;
	NSString* _title;
	NSString* _footer;
	NSArray* _preferences;
	unsigned long long _selectedIndex;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                               //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) BOOL isReadOnly;                               //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (nonatomic,copy) NSArray * preferences;                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) BOOL supportsDeletion;                       //@synthesize supportsDeletion=_supportsDeletion - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setPreferences:(NSArray *)arg1 ;
-(NSArray *)preferences;
-(BOOL)isReadOnly;
-(void)setIsReadOnly:(BOOL)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)supportsDeletion;
@end

