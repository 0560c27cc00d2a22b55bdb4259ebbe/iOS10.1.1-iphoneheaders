/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject {

	NSDocumentDifferenceSize* _dueToRecentChangesBeforeSaving;
	NSDocumentDifferenceSize* _betweenPreservingPreviousVersionAndSaving;
	NSDocumentDifferenceSize* _betweenPreviousSavingAndSaving;

}

@property (nonatomic,readonly) NSDocumentDifferenceSize * dueToRecentChangesBeforeSaving;                         //@synthesize dueToRecentChangesBeforeSaving=_dueToRecentChangesBeforeSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreservingPreviousVersionAndSaving;              //@synthesize betweenPreservingPreviousVersionAndSaving=_betweenPreservingPreviousVersionAndSaving - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * betweenPreviousSavingAndSaving;                         //@synthesize betweenPreviousSavingAndSaving=_betweenPreviousSavingAndSaving - In the implementation block
-(id)init;
-(id)description;
-(NSDocumentDifferenceSize *)dueToRecentChangesBeforeSaving;
-(NSDocumentDifferenceSize *)betweenPreservingPreviousVersionAndSaving;
-(NSDocumentDifferenceSize *)betweenPreviousSavingAndSaving;
@end
