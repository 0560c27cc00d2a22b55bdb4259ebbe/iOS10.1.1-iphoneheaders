/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedPredicateFlags : 31;
	}  _predicateFlags;
	unsigned reserved;

}

@property (copy,readonly) NSString * predicateFormat; 
+(id)predicateWithFCCKPQueryFilters:(id)arg1 translator:(id)arg2 ;
+(id)predicateWithSortedFCCKPQueryFilters:(id)arg1 translator:(id)arg2 ;
+(id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2 ;
+(id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2 ;
+(id)vcp_localPhotosPredicate;
+(id)vcp_localMoviesPredicate;
+(id)vcp_localAssetsPredicate;
+(id)predicateForAssetsInAssetCollectionWithID:(id)arg1 ;
+(id)predicateForCloudInvitationsInAssetCollection:(id)arg1 ;
+(id)predicateForCommentsInAsset:(id)arg1 ;
+(id)predicateForLikesInAsset:(id)arg1 ;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
+(CFLocaleRef)retainedLocale;
+(id)predicateWithFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)predicateWithFormat:(id)arg1 ;
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(id)predicateWithValue:(BOOL)arg1 ;
-(id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2 ;
-(id)br_watchedURL;
-(id)br_urlWithWatchedChildren;
-(id)br_fileObjectIDWithWatchedChildren;
-(id)br_watchedFileObjectID;
-(id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2 ;
-(id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)ab_metadataForMatchingRow:(CPSqliteStatement*)arg1 columnOffset:(unsigned long long)arg2 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(BOOL)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 addressBook:(void*)arg3 propertyIndices:(const _CFDictionary*)arg4 ;
-(void)ab_addCallbackContextToArray:(id)arg1 ;
-(void)ab_bindSelectClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4 ;
-(id)minimalFormInContext:(id)arg1 ;
-(void)_validateForMetadataQueryScopes:(id)arg1 ;
-(id)generateMetadataDescription;
-(BOOL)_allowsEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(void)allowEvaluation;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(NSString *)predicateFormat;
@end

