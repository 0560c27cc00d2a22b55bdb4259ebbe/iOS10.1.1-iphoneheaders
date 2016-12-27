/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TPPageIndexPath : NSObject <NSCopying> {

	unsigned long long _sectionIndex;
	unsigned long long _pageIndex;

}

@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                 //@synthesize pageIndex=_pageIndex - In the implementation block
-(id)initWithSectionIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndex;
@end

