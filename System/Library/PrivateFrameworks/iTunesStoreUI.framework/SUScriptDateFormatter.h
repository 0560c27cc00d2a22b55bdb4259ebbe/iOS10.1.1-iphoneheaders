/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject {

	NSDateFormatter* _dateFormatter;

}

@property (copy) NSString * dateFormat; 
@property (assign) unsigned long long dateStyle; 
@property (copy) NSString * localeIdentifier; 
@property (assign) unsigned long long timeStyle; 
@property (readonly) unsigned long long dateFormatterFullStyle; 
@property (readonly) unsigned long long dateFormatterLongStyle; 
@property (readonly) unsigned long long dateFormatterMediumStyle; 
@property (readonly) unsigned long long dateFormatterNoStyle; 
@property (readonly) unsigned long long dateFormatterShortStyle; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(id)init;
-(void)dealloc;
-(void)setDateFormat:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(id)stringFromDate:(id)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(double)dateFromString:(id)arg1 ;
-(id)attributeKeys;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(unsigned long long)dateFormatterFullStyle;
-(unsigned long long)dateFormatterLongStyle;
-(unsigned long long)dateFormatterMediumStyle;
-(unsigned long long)dateFormatterNoStyle;
-(unsigned long long)dateFormatterShortStyle;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)dateFormat;
@end

