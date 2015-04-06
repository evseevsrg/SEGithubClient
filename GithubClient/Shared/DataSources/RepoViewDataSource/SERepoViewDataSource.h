//
//  SERepoViewDataSource.h
//  GithubClient
//
//  Created by Evseev Sergey on 05/04/15.
//  Copyright (c) 2015 Sergey Evseev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SEGithubManagerProtocol.h"
#import "SEGithubDataItem.h"


@protocol SERepoViewDataSourceProtocol <NSObject>

- (void)didSelectRowWithData:(id <SEDataItemProtocol>)data;

@end


@interface SERepoViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) UITableView *tableView;
@property (nonatomic, weak) id <SERepoViewDataSourceProtocol> delegate;
@property (nonatomic, retain) id <SEDataItemProtocol> selectedItem;

- (instancetype)initWithGithubManager:(id <SEGithubManagerProtocol>)githubManager;

@end