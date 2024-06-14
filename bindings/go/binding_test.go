package tree_sitter_dbspec_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dbspec"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dbspec.Language())
	if language == nil {
		t.Errorf("Error loading DbSpec grammar")
	}
}
