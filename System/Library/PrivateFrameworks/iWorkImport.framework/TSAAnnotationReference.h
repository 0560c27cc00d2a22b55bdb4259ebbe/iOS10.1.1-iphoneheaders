/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKAnnotation;
@interface TSAAnnotationReference : NSObject {

	id<TSKAnnotation> _annotation;
	unsigned long long _pageIndex;

}

@property (nonatomic,retain) id<TSKAnnotation> annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
-(BOOL)referencesAnnotation:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
@end

