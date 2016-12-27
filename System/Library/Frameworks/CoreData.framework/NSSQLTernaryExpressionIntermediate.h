/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(BOOL)disambiguationKeypathHasToMany;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

