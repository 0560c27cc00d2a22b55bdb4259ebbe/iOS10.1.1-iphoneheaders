/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject {

	BOOL _showInTOC;
	TSWPTOCEntryStyle* _tocEntryStyle;

}

@property (nonatomic,retain) TSWPTOCEntryStyle * tocEntryStyle;              //@synthesize tocEntryStyle=_tocEntryStyle - In the implementation block
@property (assign,nonatomic) BOOL showInTOC;                                 //@synthesize showInTOC=_showInTOC - In the implementation block
-(id)copyWithContext:(id)arg1 ;
-(BOOL)showInTOC;
-(id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2 ;
-(TSWPTOCEntryStyle *)tocEntryStyle;
-(void)setTocEntryStyle:(TSWPTOCEntryStyle *)arg1 ;
-(void)setShowInTOC:(BOOL)arg1 ;
-(void)dealloc;
@end

