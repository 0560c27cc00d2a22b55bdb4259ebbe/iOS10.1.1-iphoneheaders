/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem {

	CoreDAVItem* _report;

}

@property (nonatomic,retain) CoreDAVItem * report;              //@synthesize report=_report - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setReport:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)report;
@end

