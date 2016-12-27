/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSLocale, NSDateFormatter, NSCache, NSURL;

@interface PEXFormatter : NSObject {

	NSDictionary* _queryCriteria;
	NSLocale* _locale;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _birthdayFormatter;
	NSDateFormatter* _chineseBirthdayFormatter;
	NSDateFormatter* _yearlessChineseBirthdayFormatter;
	NSDateFormatter* _shortEventFormatter;
	NSDateFormatter* _longEventFormatter;
	NSCache* _localizedLabelCache;
	long long _localizedLabelCacheOnce;
	NSCache* _dateFormatCache;
	long long _dateFormatCacheOnce;
	NSURL* _labeledValueLocalizationURL;

}
+(id)formatterWithQueryCriteria:(id)arg1 ;
+(id)keyDictionary:(id)arg1 ;
-(id)init;
-(id)formattedEventTime:(id)arg1 ;
-(id)formattedStringForLabel:(id)arg1 ;
-(id)formattedBirthday:(id)arg1 ;
-(id)initWithQueryCriteria:(id)arg1 ;
-(void)_precacheLabelLocalizations;
-(void)_precacheDateFormats;
-(id)_makeBirthdayFormatter;
-(id)_makeChineseBirthdayFormatter;
-(id)_makeYearlessChineseBirthdayFormatter;
-(id)_makeShortEventFormatter;
-(id)_makeLongEventFormatter;
-(BOOL)_isYearlessComponents:(id)arg1 ;
-(id)_dateFormatForTemplate:(id)arg1 ;
-(id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
@end

