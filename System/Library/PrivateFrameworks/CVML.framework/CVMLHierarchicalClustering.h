/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLClustering.h>

@interface CVMLHierarchicalClustering : NSObject <CVMLClustering> {

	shared_ptr<vision::mod::ClusteringAbstract>* m_ClusteringImpl;

}
-(BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(BOOL)cancelClustering:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
@end

