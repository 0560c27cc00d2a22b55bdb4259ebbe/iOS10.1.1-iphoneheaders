/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableDictionary;

@interface _MFAutocompleteResultsTableViewModel : NSObject {

	NSMutableDictionary* _sections;
	unsigned long long _numberOfSections;

}

@property (assign,nonatomic) unsigned long long numberOfSections;                        //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNonEmptySections; 
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
-(void)setSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfNonEmptySections;
-(id)initWithNumberOfSections:(unsigned long long)arg1 ;
-(SCD_Struct_MF9)computeDiffForModel:(id)arg1 ;
@end

