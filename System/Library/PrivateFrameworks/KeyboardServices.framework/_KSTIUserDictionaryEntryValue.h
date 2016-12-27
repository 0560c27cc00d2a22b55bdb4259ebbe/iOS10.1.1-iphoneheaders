/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_KSTIUserDictionaryEntry.h>

@class NSString, NSDate;

@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithEntry:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)matchesEntry:(id)arg1 ;
-(id)shortcutForSorting;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
@end

